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

//object, real-life object, data-sstructure
const ellie = {name :'ellie', age :20}
console.log(ellie.name);
console.log(ellie.age);

//Dynamic Typing
let text = 'hello';
console.log(text.charAt(0)); //첫 번째 문자를 출력한다.
console.log(`value : ${text}, type: ${typeof text}`);

text = 1; 
console.log(`value:${text}, type : ${typeof text}`);

text = '7' + 5;
console.log(`value: ${text}, type: ${typeof text}`); // 자동으로 string형으로 변환해줌

text = '10' / '5';
console.log(`value : ${text}, type: ${typeof text}`); //문자로 입력을 받았지만 자동으로 정수로 변환하여 값을 나눈다. 
//type이 자동으로 number로 바뀐다.
//console.log(text.charAt(0)); 이것을 다시 호출하면 현재 타입이 정수로 바뀌면서 오류가 발생한다.
