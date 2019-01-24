open TypedMath;
/* setTwo(constants, 14); */

Js.log(addInt(1, 3));

Js.log2("Output:", math->add(1, constants->two));
Js.log(math);

[@bs.deriving abstract]
type animal = {
  goodAnimal: bool,
  [@bs.optional]
  name: string,
};

[@bs.module "./animal.js"] external max: animal = "";

Js.log(max);

/* Js.log2("name:", max->type_Get); */

let max = animal(~goodAnimal=false, ~name="max", ());

Js.log(max);
