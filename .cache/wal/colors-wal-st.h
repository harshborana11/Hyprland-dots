const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#111313", /* black   */
  [1] = "#95662D", /* red     */
  [2] = "#897565", /* green   */
  [3] = "#7E8376", /* yellow  */
  [4] = "#A9822C", /* blue    */
  [5] = "#978877", /* magenta */
  [6] = "#B3A38C", /* cyan    */
  [7] = "#e6decb", /* white   */

  /* 8 bright colors */
  [8]  = "#a19b8e",  /* black   */
  [9]  = "#95662D",  /* red     */
  [10] = "#897565", /* green   */
  [11] = "#7E8376", /* yellow  */
  [12] = "#A9822C", /* blue    */
  [13] = "#978877", /* magenta */
  [14] = "#B3A38C", /* cyan    */
  [15] = "#e6decb", /* white   */

  /* special colors */
  [256] = "#111313", /* background */
  [257] = "#e6decb", /* foreground */
  [258] = "#e6decb",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
