/// <reference lib="es2015" />

function roman_to_int(s: string): number
{
    let     my_roman_map: Map<string, number> = new Map();
    let             elements: string[] = s.split('');
    let                 result: number = 0;
    let             prev_value: number = 0;

    my_roman_map.set("I", 1);
    my_roman_map.set("V", 5);
    my_roman_map.set("X", 10);
    my_roman_map.set("L", 50);
    my_roman_map.set("C", 100);
    my_roman_map.set("D", 500);
    my_roman_map.set("M", 1000);
    for (let i: number = s.length - 1; i >= 0; i--)
    {
        let   current_value: number | undefined = my_roman_map.get(elements[i]);

        if (current_value < prev_value)
        {
            result -= current_value;
        }
        else
        {
            result += current_value;
        }

        prev_value = current_value;
    }
    return result;
};

let result: number = roman_to_int("XXIV");
console.log(result);