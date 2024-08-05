/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
   let temp = s.trim().split(/\s+/).reverse().join(' ');

   return temp;
};
