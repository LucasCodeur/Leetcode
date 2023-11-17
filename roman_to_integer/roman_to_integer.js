/// <reference lib="es2015" />
function roman_to_int(s) {
    var my_roman_map = new Map();
    var elements = s.split('');
    var result = 0;
    var prev_value = 0;
    my_roman_map.set("I", 1);
    my_roman_map.set("V", 5);
    my_roman_map.set("X", 10);
    my_roman_map.set("L", 50);
    my_roman_map.set("C", 100);
    my_roman_map.set("D", 500);
    my_roman_map.set("M", 1000);
    for (var i = s.length - 1; i >= 0; i--) {
        var current_value = my_roman_map.get(elements[i]);
        if (current_value < prev_value) {
            result -= current_value;
        }
        else {
            result += current_value;
        }
        prev_value = current_value;
    }
    return result;
}
;
var result = roman_to_int("XXIV");
console.log(result);
