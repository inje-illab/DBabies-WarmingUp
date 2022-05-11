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

//싱속
class Shape{
    constructor(width=0,height=0, color=0){
        this.width  = width;
        this.height = height;
        this.color = color;
    }

    draw(){
        console.log(`drawing  ${this.color} color!`);
    }

    getArea(){
        return this.width * this.height;
    }
}

class Rectangle extends Shape{}
class Triangle extends Shape{
    draw(){//오버라이드
        super.draw(); //super을 통해 부모클래스의 draw함수를 불러온다.
        console.log('🔺');
    }
    getArea(){ //오버라이드
        return this.width * this.height /2; 
    }
}

const rectangle = new Rectangle(20,20,'blue');
rectangle.draw();
console.log(rectangle.getArea());


const triangle = new Triangle(20,20,'red');
triangle.draw();
console.log(triangle.getArea());


// instanceof
console.log(rectangle instanceof Rectangle); //t
console.log(triangle instanceof Rectangle); //f
console.log(triangle instanceof Triangle); //t
console.log(triangle instanceof Shape); //t
console.log(triangle instanceof Object); //t
