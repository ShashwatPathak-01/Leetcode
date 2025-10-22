/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const trans_arr=[];
    for(let i=0;i<arr.length;i++)
    trans_arr[i]=fn(arr[i],i);
    return trans_arr;
};