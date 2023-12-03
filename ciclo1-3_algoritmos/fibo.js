let n = 10 // Numero de termos
let elementoN; // 


for (i = 3; i < n ; i++){
    elementoN = (i - 1)+ (i - 2)
    console.log(elementoN);
}

const number = 10
let n1 = 1, n2 = 1, nextTerm

for (let i = 1; i <= number; i++){
    console.log(n1);
    nextTerm = n1 + n2
    n1 = n2
    n2 = nextTerm

    console.log(nextTerm);
}



