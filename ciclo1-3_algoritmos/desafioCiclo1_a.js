/*

O problema que ele encontrou foi o seguinte: De um ponto A, um agrimensor (que tem 1,75m de altura) enxerga o topo T de um morro, em um ângulo de 45o.  Após caminhar exatamente 50 metros em direção ao morro, ele passou a ver o topo T em um ângulo de 60o. Determine a altura do morro.

Ele pensou sobre a questão e concluiu que poderia fazer um algoritmo mais genérico. Seu desafio é propor um algoritmo genérico da forma como pensado pelo aluno para fazer o cálculo da altura do morro.  

*/

let metroInicial = 0;
let inMetro = prompt("Qual a quantidade de metros caminhados? ")
let inAnguloInicial = prompt("Qual o angulo inicial? ")
let inAnguloFinal = prompt ("Qual o angulo final? ")

function descobrirDistancia(metro, anguloInicial, anguloFinal) {
    if (inAnguloFinal > 90 || inAnguloFinal < 0){
        return alert("Esse ângulo não é possível")
    }

}

// let diferencaAngulo = anguloFinal - anguloInicial  

// TODO calcular a altura do morro (Lado1)
// InAngulo > 0 && < 90
// Tangente1 = Lado1 / Lado2
// Lado1 = Tamanho da Montanha
// Lado2 = Metros do Aluno  