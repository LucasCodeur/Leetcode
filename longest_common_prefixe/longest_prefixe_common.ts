function longest_common_prefixe(strs: string[]): string
{
    // Si le tableau est vide, retourne une chaine vide
    if (strs.length === 0)
        return "";

    // Variable servant a accueillir le prefixe commun
    let common_prefix: string = "";

    // variable permettant d'obtenir la longueur de la plus grande chaine de caractere
    const   max_length = Math.min(...strs.map(str => str.length));
    
    // Boucle permettant de boucler sur la longueur maximal de la plus grande chaine de caractere de strs permettant d'etre sur d'iterer entierement sur chaque chaine de caractere
    for (let i = 0; i < max_length; i++)
    {
        // Caractere actuel de la premier chaine de caractere
        // Verifie si chaque caractere est present dans chaque chaine de caractere
        if (strs.every(str => str[i] === strs[0][i]))
            common_prefix += strs[0][i];
        // Si le caractere n'est pas commun on stop la boucle.
        else
            return common_prefix;
    }
    return common_prefix;
};

const strs: string[] = ["flower", "flow", "flo"];
let result: string = longest_common_prefixe(strs);
console.log(result);