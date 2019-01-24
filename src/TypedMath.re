[@bs.module "./math.js"] external addInt: (int, int) => int = "add";
[@bs.module "./math.js"] external addFloat: (float, float) => float = "add";

type constants;
[@bs.module "./math.js"] external constants: constants = "CONSTANTS";

[@bs.get] external two: constants => int = "";
/* [@bs.set] external setTwo: (constants, int) => unit = "two"; */

type jsMath;
[@bs.module] external math: jsMath = "./math.js";

[@bs.send] external add: (jsMath, int, int) => int = "";
