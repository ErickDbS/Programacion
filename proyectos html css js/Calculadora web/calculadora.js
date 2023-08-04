let operacion = '';
let numeroAnterior = '';
let resultado = '';

function agregarValor(valor) {
    const display = document.getElementById('display');
    display.value += valor;
}

function limpiar() {
    const display = document.getElementById('display');
    display.value = '';
    operacion = '';
    numeroAnterior = '';
    resultado = '';
}


function cambiarSigno() {
  if (display.value !== '') {
    if (display.value[0] === '-') {
      display.value = display.value.slice(1);
    } else {
      display.value = '-' + display.value;
    }
  }
}

function calcular() {
  try {
    let resultado = eval(display.value);
    display.value = resultado;
  } catch (error) {
    display.value = 'Error';
  }
}


