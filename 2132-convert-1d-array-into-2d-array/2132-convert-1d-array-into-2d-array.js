/**
 * @param {number[]} original
 * @param {number} m
 * @param {number} n
 * @return {number[][]}
 */
var construct2DArray = function(original, m, n) {
    if (m * n != original.length) return [];
    
    let arr = [];
    let temp = 0;
    let ans = [];

    for (let i = 0; i < original.length; i++) {
        arr.push(original[i]);
        temp++;
        if (temp == n) {
            ans.push(arr);
            temp = 0;
            arr = []; 
        }
    }
    return ans;
};
