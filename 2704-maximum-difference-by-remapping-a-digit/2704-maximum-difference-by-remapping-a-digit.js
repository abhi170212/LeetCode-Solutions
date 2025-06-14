/**
 * @param {number} num
 * @return {number}
 */
minMaxDifference = (num, s = String(num)) => {
    const firstNon9 = s[s.search(/[0-8]/)] ?? -1;
    const firstNon0 = s[s.search(/[1-9]/)] ?? -1;

    const max = (firstNon9 + 1) ? +s.replace(new RegExp(firstNon9, 'g'), '9') : num;
    const min = (firstNon0 + 1) ? +s.replace(new RegExp(firstNon0, 'g'), '0') : num

    return max - min
}