#!/bin/bash

# script to set random background wallpapers on my GNOME desktop
# set base path
export wallpaper_path=$HOME/Pictures
shopt -s nullglob

killall waybar
# shuffle function for the wallpapers
shuffle() {
	local i tmp size max rand

	# $RANDOM % (i+1) is biased because of the limited range of $RANDOM
	# Compensate by using a range which is a multiple of the array size.
	size=${#wallpapers[*]}
	max=$((32768 / size * size))

	for ((i = size - 1; i > 0; i--)); do
		while (((rand = $RANDOM) >= max)); do :; done
		rand=$((rand % (i + 1)))
		tmp=${wallpapers[i]} wallpapers[i]=${wallpapers[rand]} wallpapers[rand]=$tmp
	done
}

# store all the image file names in wallpapers array
wallpapers=(
	"$wallpaper_path"/*.jpg
	"$wallpaper_path"/*.jpeg
	"$wallpaper_path"/*.png
	"$wallpaper_path"/*.bmp
	"$wallpaper_path"/*.svg
)
# get array length
wallpapers_size=${#wallpapers[*]}

# randomly shuffle the wallpapers at start up
shuffle
swww init
swww img "${wallpapers[$index]}" --transition-type any --transition-fps 60
wal -i "${wallpapers[$index]}"
waybar
