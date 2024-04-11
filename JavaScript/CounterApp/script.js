// var myAge = 18;
// console.log(myAge);

let cnt = 0; 
const para = document.getElementById('count'); 

const incer = document.getElementById('incr');
incer.addEventListener('click' , () => {    
    para.innerHTML = cnt + 1;
    cnt = cnt +1;
});

const decer = document.getElementById('decr');
decer.addEventListener('click' , () => {
    para.innerHTML = cnt - 1;
    cnt = cnt -1;
});

const save = document.getElementById('save');
save.addEventListener('click' , () => {
    const par = document.getElementById('prevData');
        par.textContent = `${par.innerText} ${cnt}, `;
        para.textContent = 0;
        cnt = 0;       
});


