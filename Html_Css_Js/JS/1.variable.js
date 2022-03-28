'use-strict';
//var hoisting  = 어디에 선언했느냐와 상관없이 항상 젤 위로 선언을 끌어올려주는 거

let name = 'ellie';
console.log(name);
name = 'hello';
console.log(name);

//number  = 모든 숫자 종류 다


//const로 선언을 하면 값을 변경을 못한다.
const num =99;

const infinity = 1/0 // 무한대
const negativeInfinity = -1/0 //-무한대
const nAn = 'not a number' /2 //NaN
console.log(infinity);
console.log(negativeInfinity);
console.log(nAn);

//string 
const char = 'c';
const brenden1 = 'brenden';
const greeting = 'hello' + brenden1;
console.log('value: $')

//boolean
const test = true;
const ran = 3<1; //이런 식도 가능

//null
//너는 명확하게 비어있는 값이야라고 해주는 거


//undefined
//선언은 되어 있지만 값을 안 넣은 거


//symbol 
const symbol1 = Symbol('id');
const symbol2 = Symbol('id');
console.log(symbol1 === symbol2); //false

//같은 symble을 만들고 싶다면
const gsymbol1 = Symbol.for('id');
const gsymbol2 = Symbol.for('id');
console.log(gsymbol1===gsymbol2)//true

