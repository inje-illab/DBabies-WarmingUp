//함수
function printhello(){
    console.log('hello');
}
printhello();

function log(message){
    console.log(message)
}
log('@hello@');
log(1234);

//파라미터
function changeName(obj){ //변수에 저장되어 있는 이름을 바꿔준다.
    obj.name = 'coder';
}
const ellie = { name : 'ellie'};
changeName(ellie)
console.log(ellie);

//디폴트 파라미터
function showMessage(message,from = 'unknown'){//파라이터값을 미리 정할 수 있다 이렇게 하면 값이 들어오지 않앗을 때 자동으로 저 값이 들어간다.
    console.log(`${message} by ${from}`);
}
showMessage("hI!");

//rest 파라미터
function printAll(...args){ // ... 을 찍으면 배열 파라미터가 전달
    for(let i = 0; i< args.length; i++){
        console.log(args[i]);
    }

    for(const arg of args){
        console.log(arg)
    }

    //위의 반복문은 다 같은 역할
}
printAll('dream', 'coding', 'ellie');