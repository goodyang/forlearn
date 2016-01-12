/**
 * @param {number} num
 * @return {string}
 */
var intToRoman = function(num) {
    var original = num;
    var basearray=[['0','I','II','III','IV','V','VI','VII', 'VIII','IX'],
                    ['0', 'X', 'XX', 'XXX', 'XL', 'L', 'LX', 'LXX', 'LXXX', 'XC'],
                    ['0', 'C', 'CC', 'CCC', 'CD', 'D', 'DC', 'DCC', 'DCCC', 'CM'],
                    ['0', 'M', 'MM', 'MMM']]; 
    var result="";
    var divisor = 1000;
	
    if(original>0&&(Math.floor(original/divisor)) > 0) {
        result+=basearray[3][Math.floor(original/divisor)];
        original = original%divisor;
    }        
    divisor/= 10;
    if(original>0&&(Math.floor(original/divisor)) > 0) {
        result+=basearray[2][Math.floor(original/divisor)];
        original = original%divisor;
    }
    divisor/= 10;
    if(original>0&&(Math.floor(original/divisor)) > 0) {
        result+=basearray[1][Math.floor(original/divisor)];
        original = original%divisor;
    }
    
    if(original>0) {
        result+=basearray[0][original];
    }
    return result;
};