#include <math.hp>
#include <colortools.hp>
#include <stdbase.hp>
#include <mainargs.hp>

#include package <jsBrackets.hp>

package Main

void arg = getInput("Main> ");
void parse = parseArg.Separator(" ");

arg.parse;

if (argv[1] of arg) in Colors.("hsl", "hsla", "rgb", "hslv", "rgba") {
    global string col1 = argv[1] of arg;
}

if (arg[2] of arg) in Colors.("hsl", "hsla", "rgb", "hslv", "rgba") {
    global string col2 = argv[2] of arg;
}

ColOff = ColorOffset::col1:col2;
colA = ColToInt(col1);
colB = ColToInt(col2);

return "%" + ((colA * PI - (ColOff + colB)) * (ColOff / E ** (ColB * ColA - (ColOff))));
