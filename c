# Adicionando métodos especiais na classe Conta (ou reutilizando nas filhas)
class ContaComMetodos(Conta):
    def __init__(self, numero, titular, saldo_inicial=0.0):
        super().__init__(numero, titular, saldo_inicial)

    def calcular_taxa_manutencao(self):
        return 10.0

    def __str__(self):
        return f"Conta nº {self._numero} - Titular: {self._titular} - Saldo: R$ {self._saldo:.2f}"

    def __repr__(self):
        return f"ContaComMetodos(numero='{self._numero}', titular='{self._titular}', saldo={self._saldo})"

    def __eq__(self, outro):
        return self._numero == outro._numero

    def __lt__(self, outro):
        return self._saldo < outro._saldo
