 //오브젝트
 const obj1= {}; 
 const obj2 = new Object(); //오브젝트를 부르는 방법들

 function print(person){
     console.log(person.name);
     console.log(person.age);
 }

 const ellie = {name: 'elloe', age: 4}; // key 와 value
 print(ellie);

 //비추천하는 벙법 이런 방법도 있다 정도만 알고 넘어가기
 ellie.hasJob = true; //이러게 이미 선언된 변수에 새로운 걸 추가할 수 있음
 console.log(ellie.hasJob); 
 //데이터를 삭제하는 것도 가능
delete ellie.hasJob;
console.log(ellie.hasJob);


 // computed propertis
 console.log(ellie.name); //코딩할 때는 이런 방법으로 한다.
 console.log(ellie['name']); //인의 key는 string타입으로 받아줘야 한다. //실시간으로 값을 받아오고 싶을 떄

 function printValue(obj, key){
     console.log(obj[key]);
     //console.log(obj.key)// 이렇게 쓰면 터짐
 }
printValue(ellie, 'name');

//in operator
console.log('name'in ellie); // in 이라는 키워드를 통해 object 안에 해당하는 key가 있는지 확인할 수 있다.

// for..in vs  for..of
for (sey in ellie){
    console.log(key);
}
//console.clear();

const array = [1,2,4,5];
for(value of array){
    console.log(value);
}

// Cloning
const user = {name :'ellie', age :'20'};
const user2 = user; //user와 같은 레퍼런스를 가리킨다  얕은 복사
user2.name = 'coder';
console.log(user);

const user3 = {};
for( key in user){
    user3[key] = user[key];
}
console.log(user3);

const user4 = {};
Object.assign({}, user);