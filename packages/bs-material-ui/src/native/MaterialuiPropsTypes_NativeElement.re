module type S = {
  type t = string;
};

module type Extension = {
  type t;
  [@bs.inline "address"]
  let address: t;
  [@bs.inline "article"]
  let article: t;
  [@bs.inline "aside"]
  let aside: t;
  [@bs.inline "footer"]
  let footer: t;
  [@bs.inline "header"]
  let header: t;
  [@bs.inline "h1"]
  let h1: t;
  [@bs.inline "h2"]
  let h2: t;
  [@bs.inline "h3"]
  let h3: t;
  [@bs.inline "h4"]
  let h4: t;
  [@bs.inline "h5"]
  let h5: t;
  [@bs.inline "h6"]
  let h6: t;
  [@bs.inline "hgroup"]
  let hgroup: t;
  [@bs.inline "main"]
  let main: t;
  [@bs.inline "nav"]
  let nav: t;
  [@bs.inline "section"]
  let section: t;
  [@bs.inline "blockquote"]
  let blockquote: t;
  [@bs.inline "dd"]
  let dd: t;
  [@bs.inline "dir"]
  let dir: t;
  [@bs.inline "div"]
  let div: t;
  [@bs.inline "dl"]
  let dl: t;
  [@bs.inline "dt"]
  let dt: t;
  [@bs.inline "figcaption"]
  let figcaption: t;
  [@bs.inline "figure"]
  let figure: t;
  [@bs.inline "hr"]
  let hr: t;
  [@bs.inline "li"]
  let li: t;
  [@bs.inline "ol"]
  let ol: t;
  [@bs.inline "p"]
  let p: t;
  [@bs.inline "pre"]
  let pre: t;
  [@bs.inline "ul"]
  let ul: t;
  [@bs.inline "a"]
  let a: t;
  [@bs.inline "abbr"]
  let abbr: t;
  [@bs.inline "b"]
  let b: t;
  [@bs.inline "bdi"]
  let bdi: t;
  [@bs.inline "bdo"]
  let bdo: t;
  [@bs.inline "br"]
  let br: t;
  [@bs.inline "cite"]
  let cite: t;
  [@bs.inline "code"]
  let code: t;
  [@bs.inline "data"]
  let data: t;
  [@bs.inline "dfn"]
  let dfn: t;
  [@bs.inline "em"]
  let em: t;
  [@bs.inline "i"]
  let i: t;
  [@bs.inline "kbd"]
  let kbd: t;
  [@bs.inline "mark"]
  let mark: t;
  [@bs.inline "q"]
  let q: t;
  [@bs.inline "rb"]
  let rb: t;
  [@bs.inline "rp"]
  let rp: t;
  [@bs.inline "rt"]
  let rt: t;
  [@bs.inline "rtc"]
  let rtc: t;
  [@bs.inline "ruby"]
  let ruby: t;
  [@bs.inline "s"]
  let s: t;
  [@bs.inline "samp"]
  let samp: t;
  [@bs.inline "small"]
  let small: t;
  [@bs.inline "span"]
  let span: t;
  [@bs.inline "strong"]
  let strong: t;
  [@bs.inline "sub"]
  let sub: t;
  [@bs.inline "sup"]
  let sup: t;
  [@bs.inline "time"]
  let time: t;
  [@bs.inline "tt"]
  let tt: t;
  [@bs.inline "u"]
  let u: t;
  [@bs.inline "var"]
  let var: t;
  [@bs.inline "wbr"]
  let wbr: t;
  [@bs.inline "area"] 
  let area: t;
  [@bs.inline "audio"]
  let audio: t;
  [@bs.inline "img"]
  let img: t;
  [@bs.inline "map"]
  let map: t;
  [@bs.inline "track"]
  let track: t;
  [@bs.inline "video"]
  let video: t;
  [@bs.inline "applet"]
  let applet: t;
  [@bs.inline "embed"]
  let embed: t;
  [@bs.inline "iframe"]
  let iframe: t;
  [@bs.inline "object"]
  let object_: t;
  [@bs.inline "param"]
  let param: t;
  [@bs.inline "picture"]
  let picture: t;
  [@bs.inline "source"]
  let source: t;
  [@bs.inline "del"]
  let del: t;
  [@bs.inline "ins"]
  let ins: t;
  [@bs.inline "captain"]
  let caption: t;
  [@bs.inline "col"]
  let col: t;
  [@bs.inline "colgroup"]
  let colgroup: t;
  [@bs.inline "table"]
  let table: t;
  [@bs.inline "tbody"]
  let tbody: t;
  [@bs.inline "td"]
  let td: t;
  [@bs.inline "tfoot"]
  let tfoot: t;
  [@bs.inline "th"]
  let th: t;
  [@bs.inline "thead"]
  let thead: t;
  [@bs.inline "tr"]
  let tr: t;
  [@bs.inline "button"]
  let button: t;
  [@bs.inline "datalist"]
  let datalist: t;
  [@bs.inline "fieldset"]
  let fieldset: t;
  [@bs.inline "form"]
  let form: t;
  [@bs.inline "input"]
  let input: t;
  [@bs.inline "label"]
  let label: t;
  [@bs.inline "legend"]
  let legend: t;
  [@bs.inline "meter"]
  let meter: t;
  [@bs.inline "optgroup"]
  let optgroup: t;
  [@bs.inline "option"]
  let option: t;
  [@bs.inline "output"]
  let output: t;
  [@bs.inline "progress"]
  let progress: t;
  [@bs.inline "select"]
  let select: t;
  [@bs.inline "textarea"]
  let textarea: t;
  [@bs.inline "details"]
  let details: t;
  [@bs.inline "dialog"]
  let dialog: t;
  [@bs.inline "menu"]
  let menu: t;
  [@bs.inline "menuItem"]
  let menuitem: t;
  [@bs.inline "summary"]
  let summary: t;
  [@bs.inline "element"]
  let element: t;
  [@bs.inline "slot"]
  let slot: t;
  [@bs.inline "template"]
  let template: t;
};

module Extend = (Arg: S)
  : (Extension with type t := Arg.t) => {
  [@bs.inline]
  let address = "address";
  [@bs.inline]
  let article = "article";
  [@bs.inline]
  let aside = "aside";
  [@bs.inline]
  let footer = "footer";
  [@bs.inline]
  let header = "header";
  [@bs.inline]
  let h1 = "h1";
  [@bs.inline]
  let h2 = "h2";
  [@bs.inline]
  let h3 = "h3";
  [@bs.inline]
  let h4 = "h4";
  [@bs.inline]
  let h5 = "h5";
  [@bs.inline]
  let h6 = "h6";
  [@bs.inline]
  let hgroup = "hgroup";
  [@bs.inline]
  let main = "main";
  [@bs.inline]
  let nav = "nav";
  [@bs.inline]
  let section = "section";
  [@bs.inline]
  let blockquote = "blockquote";
  [@bs.inline]
  let dd = "dd";
  [@bs.inline]
  let dir = "dir";
  [@bs.inline]
  let div = "div";
  [@bs.inline]
  let dl = "dl";
  [@bs.inline]
  let dt = "dt";
  [@bs.inline]
  let figcaption = "figcaption";
  [@bs.inline]
  let figure = "figure";
  [@bs.inline]
  let hr = "hr";
  [@bs.inline]
  let li = "li";
  [@bs.inline]
  let ol = "ol";
  [@bs.inline]
  let p = "p";
  [@bs.inline]
  let pre = "pre";
  [@bs.inline]
  let ul = "ul";
  [@bs.inline]
  let a = "a";
  [@bs.inline]
  let abbr = "abbr";
  [@bs.inline]
  let b = "b";
  [@bs.inline]
  let bdi = "bdi";
  [@bs.inline]
  let bdo = "bdo";
  [@bs.inline]
  let br = "br";
  [@bs.inline]
  let cite = "cite";
  [@bs.inline]
  let code = "code";
  [@bs.inline]
  let data = "data";
  [@bs.inline]
  let dfn = "dfn";
  [@bs.inline]
  let em = "em";
  [@bs.inline]
  let i = "i";
  [@bs.inline]
  let kbd = "kbd";
  [@bs.inline]
  let mark = "mark";
  [@bs.inline]
  let q = "q";
  [@bs.inline]
  let rb = "rb";
  [@bs.inline]
  let rp = "rp";
  [@bs.inline]
  let rt = "rt";
  [@bs.inline]
  let rtc = "rtc";
  [@bs.inline]
  let ruby = "ruby";
  [@bs.inline]
  let s = "s";
  [@bs.inline]
  let samp = "samp";
  [@bs.inline]
  let small = "small";
  [@bs.inline]
  let span = "span";
  [@bs.inline]
  let strong = "strong";
  [@bs.inline]
  let sub = "sub";
  [@bs.inline]
  let sup = "sup";
  [@bs.inline]
  let time = "time";
  [@bs.inline]
  let tt = "tt";
  [@bs.inline]
  let u = "u";
  [@bs.inline]
  let var = "var";
  [@bs.inline]
  let wbr = "wbr";
  [@bs.inline] 
  let area = "area";
  [@bs.inline]
  let audio = "audio";
  [@bs.inline]
  let img = "img";
  [@bs.inline]
  let map = "map";
  [@bs.inline]
  let track = "track";
  [@bs.inline]
  let video = "video";
  [@bs.inline]
  let applet = "applet";
  [@bs.inline]
  let embed = "embed";
  [@bs.inline]
  let iframe = "iframe";
  [@bs.inline]
  let object_ = "object";
  [@bs.inline]
  let param = "param";
  [@bs.inline]
  let picture = "picture";
  [@bs.inline]
  let source = "source";
  [@bs.inline]
  let del = "del";
  [@bs.inline]
  let ins = "ins";
  [@bs.inline]
  let caption = "captain";
  [@bs.inline]
  let col = "col";
  [@bs.inline]
  let colgroup = "colgroup";
  [@bs.inline]
  let table = "table";
  [@bs.inline]
  let tbody = "tbody";
  [@bs.inline]
  let td = "td";
  [@bs.inline]
  let tfoot = "tfoot";
  [@bs.inline]
  let th = "th";
  [@bs.inline]
  let thead = "thead";
  [@bs.inline]
  let tr = "tr";
  [@bs.inline]
  let button = "button";
  [@bs.inline]
  let datalist = "datalist";
  [@bs.inline]
  let fieldset = "fieldset";
  [@bs.inline]
  let form = "form";
  [@bs.inline]
  let input = "input";
  [@bs.inline]
  let label = "label";
  [@bs.inline]
  let legend = "legend";
  [@bs.inline]
  let meter = "meter";
  [@bs.inline]
  let optgroup = "optgroup";
  [@bs.inline]
  let option = "option";
  [@bs.inline]
  let output = "output";
  [@bs.inline]
  let progress = "progress";
  [@bs.inline]
  let select = "select";
  [@bs.inline]
  let textarea = "textarea";
  [@bs.inline]
  let details = "details";
  [@bs.inline]
  let dialog = "dialog";
  [@bs.inline]
  let menu = "menu";
  [@bs.inline]
  let menuitem = "menuItem";
  [@bs.inline]
  let summary = "summary";
  [@bs.inline]
  let element = "element";
  [@bs.inline]
  let slot = "slot";
  [@bs.inline]
  let template = "template";
};