function descobriAlturaMorro(metros, angInicial, angFinal) {
    const anguloInicialRadianos = (angInicial * Math.PI) / 180;
    const anguloFinalRadianos = (angFinal * Math.PI) / 180;

  // Calcular a diferença entre os ângulos
  const diferencaAngulos = anguloFinalRadianos - anguloInicialRadianos;

  // Calcular a altura do morro usando a tangente da diferença de ângulos
  const alturaMorro = metros * Math.tan(diferencaAngulos);

  return alturaMorro;

}