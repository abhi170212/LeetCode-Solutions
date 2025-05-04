/**
 * @param {number[][]} dominoes
 * @return {number}
 */
const numEquivDominoPairs = function(dominoes) {
    const frequencies = new Int16Array(160);
    dominoes.forEach(([a, b]) => frequencies[a > b ? (a << 4) + b : (b << 4) + a]++);
    return frequencies.reduce((sum, v) => sum + (v * (v - 1) >> 1), 0);
};