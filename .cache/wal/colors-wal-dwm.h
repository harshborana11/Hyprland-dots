static const char norm_fg[] = "#e6decb";
static const char norm_bg[] = "#111313";
static const char norm_border[] = "#a19b8e";

static const char sel_fg[] = "#e6decb";
static const char sel_bg[] = "#897565";
static const char sel_border[] = "#e6decb";

static const char urg_fg[] = "#e6decb";
static const char urg_bg[] = "#95662D";
static const char urg_border[] = "#95662D";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
