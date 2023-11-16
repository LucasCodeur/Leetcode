function two_sums(nums: number[], target: number): number[]
{
    let anwser_array: number[] = [];
    for (let i: number = 0; i < nums.length; i++)
    {
        let good_anwser: number = target - nums[i];
        for (let j: number = i + 1; j < nums.length; j++)
        {
            if (nums[j] === good_anwser)
            {
                anwser_array.push(i, j);
                return anwser_array;
            }
        }
    }
    return [];
}
const   result = two_sums([1, 2, 3, 4], 3);
console.log(result);