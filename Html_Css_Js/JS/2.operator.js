//string 
console.log('my' + 'cat');
console.log('1'+5);
console.log(`string literals:
'''
1+2 = ${1+2}`);

//여러 연산
console.log(2+2);
console.log(2-2);
console.log(2/2);
console.log(2%2);
console.log(2*2);
console.log(2**2);


// ++ --
let num1 = 5
const num2 = ++num1;
const num3 = --num1;

//비교연산자 ||  &&  !


// ==  loose epuality  type과 관계없이 값만 같다면 true
const five =5;
const ch_five = '5';
console.log(five == ch_five);

// === strict equality  type까지 생각해서 타입이 다르다면 false
console.log(five === ch_five);

// ==  === referance
const ellie1 = {name : 'ellie'};
const ellie2 = {name : 'ellie'};
const ellie3 = ellie1;
console.log(ellie1 == ellie2); //false 
console.log(ellie1 === ellie2);// false   37번줄과 38번줄은 주소값이 다르기 때문에 false가 나온다.
console.log(ellie1 === ellie3);// true  3과 1은 주소값을 공유하기 떄문에 같다


