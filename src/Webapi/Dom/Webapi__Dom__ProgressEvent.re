type t = Dom.progressEvent;

include Webapi__Dom__Event.Impl({
  type nonrec t = t;
});

[@new] external make: string => t = "ProgressEvent";
[@new] external makeWithOptions: (string, Js.t({..})) => t = "ProgressEvent";

[@get] external lengthComputable: t => bool;
[@get] external loaded: t => int;
[@get] external total: t => int;
