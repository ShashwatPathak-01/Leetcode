/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    return{
        toBe:function (value){
            if(val===value)
            return true;
            else
            throw new Error("Not Equal");
        },
        notToBe:(value1)=>{
            if(value1===val)
            throw new Error("Equal");
            else
            return true
        }
    }
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */