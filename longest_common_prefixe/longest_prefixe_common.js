function longest_common_prefixe(strs) {
    // Si le tableau est vide, retourne une chaine vide
    if (strs.length === 0)
        return "";
    // Variable servant a accueillir le prefixe commun
    var common_prefix = "";
    // variable permettant d'obtenir la longueur de la plus grande chaine de caractere
    var max_length = Math.min.apply(Math, strs.map(function (str) { return str.length; }));
    var _loop_1 = function (i) {
        // Caractere actuel de la premier chaine de caractere
        // Verifie si chaque caractere est present dans chaque chaine de caractere
        if (strs.every(function (str) { return str[i] === strs[0][i]; }))
            common_prefix += strs[0][i];
        // Si le caractere n'est pas commun on stop la boucle.
        else
            return { value: common_prefix };
    };
    // Boucle permettant de boucler sur la longueur maximal de la plus grande chaine de caractere de strs permettant d'etre sur d'iterer entierement sur chaque chaine de caractere
    for (var i = 0; i < max_length; i++) {
        var state_1 = _loop_1(i);
        if (typeof state_1 === "object")
            return state_1.value;
    }
    return common_prefix;
}
;
var strs = ["flower", "flow", "flo"];
var result = longest_common_prefixe(strs);
console.log(result);
