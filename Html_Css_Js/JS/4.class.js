`use sttict`;

//calss 선언
class person{
    constructor(name, age){
        //fields
        this.name = name;
        this.age = age;
    }

    //methods
    speak(){
        console.log(`${this.name}: hello!`);
    }
}

const ellie = new person('ellie',20);
console.log(ellie.name);
console.log(ellie.age);
ellie.speak();


//getter and setter
class User{
    consturtor(firstName, lastName, age){
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
    }

    get age(){
        return this._age;
    }
    set age(value){
        // if(value < 0){
        //     throw Error('age can not be negative');
        // }
        this._age = value <0 ? 0 :value;
    }
}

const user1 = new User('steve', 'job', -1);
console.log(user1.age);

// public, private, static 최근에 추가됨 근데 아직은 쓸 수 있는 데가 많지 않음
// 알고만 있자