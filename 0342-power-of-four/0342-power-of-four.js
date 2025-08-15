/**
 * @param {number} n
 * @return {boolean}
 */
const isPowerOfFour = n => !(n & (n - 1)) && n % 3 === 1;