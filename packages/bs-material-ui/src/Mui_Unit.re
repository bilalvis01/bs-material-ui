/**
 *
 * Relative length units
 *  
 */
let ch = value => string_of_int(value) ++ "ch";
let em = value => Belt.Float.toString(value) ++ "em";
let ex = value => string_of_int(value) ++ "ex";
let rem = value => Belt.Float.toString(value) ++ "rem";
let vh = value => string_of_int(value) ++ "vh";
let vw = value => string_of_int(value) ++ "vw";
let vmin = value => string_of_int(value) ++ "vmin";
let vmax = value => string_of_int(value) ++ "vmax";
/**
 * 
 * Absolute length units
 * 
 */
let px = value => string_of_int(value) ++ "px";
let cm = value => string_of_int(value) ++ "cm";
let mm = value => string_of_int(value) ++ "mm";
let inch = value => string_of_int(value) ++ "in";
let pc = value => string_of_int(value) ++ "pc";
let pt = value => string_of_int(value) ++ "pt";
/**
 * 
 * Length percentage
 * 
 */
let percent = value => string_of_int(value) ++ "%";