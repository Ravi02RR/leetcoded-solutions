/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
   let temp = s.trim().split(/\s+/).reverse().join(' ');
   console.log(temp);

   return temp;
};
