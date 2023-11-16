function two_sums(nums, target) {
    var anwser_array = [];
    for (var i = 0; i < nums.length; i++) {
        var good_anwser = target - nums[i];
        for (var j = i + 1; j < nums.length; j++) {
            if (nums[j] === good_anwser) {
                anwser_array.push(i, j);
                return anwser_array;
            }
        }
    }
    return [];
}
var result = two_sums([1, 2, 3, 4], 3);
console.log(result);
