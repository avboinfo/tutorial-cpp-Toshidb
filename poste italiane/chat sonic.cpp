#include <iostream>
#include <queue>
#include <map>

// Definizione dei tipi di servizio
enum class Service { Spedizione, Ricezione, Finanziario };

// Definizione della classe Cliente
class Cliente {
public:
    Cliente(int codice, Service servizio) : codice(codice), servizio(servizio) {}
    int getCodice() const { return codice; }
    Service getServizio() const { return servizio; }

private:
    int codice;
    Service servizio;
};

// Definizione della classe UfficioPostale
class UfficioPostale {
public:
    void nuovoCliente(int codice, Service servizio) {
        ClientiInAttesa[servizio].push(Cliente(codice, servizio));
    }

    void chiamaCliente() {
        if (!ClientiInAttesa[Service::Spedizione].empty()) {
            serveCliente(ClientiInAttesa[Service::Spedizione].front());
            ClientiInAttesa[Service::Spedizione].pop();
        } else if (!ClientiInAttesa[Service::Ricezione].empty()) {
            serveCliente(ClientiInAttesa[Service::Ricezione].front());
            ClientiInAttesa[Service::Ricezione].pop();
        } else if (!ClientiInAttesa[Service::Finanziario].empty()) {
            serveCliente(ClientiInAttesa[Service::Finanziario].front());
            ClientiInAttesa[Service::Finanziario].pop();
        } else {
            std::cout << "Nessun cliente in attesa al momento." << std::endl;
        }
    }

    void visualizzaClientiInAttesa() {
        for (const auto& pair : ClientiInAttesa) {
            std::cout << "Servizio: " << static_cast<int>(pair.first) << " - Clienti in attesa: " << pair.second.size() << std::endl;
        }
    }

private:
    std::map<Service, std::queue<Cliente>> ClientiInAttesa;

    void serveCliente(const Cliente& cliente) {
        std::cout << "Cliente " << cliente.getCodice() << " chiamato per il servizio " << static_cast<int>(cliente.getServizio()) << std::endl;
    }
};

// Programma di test della classe UfficioPostale
int main() {
    UfficioPostale ufficio;
    ufficio.nuovoCliente(1, Service::Spedizione);
    ufficio.nuovoCliente(2, Service::Finanziario);
    ufficio.nuovoCliente(3, Service::Ricezione);
    ufficio.visualizzaClientiInAttesa();
    ufficio.chiamaCliente();
    ufficio.chiamaCliente();
    ufficio.visualizzaClientiInAttesa();

    return 0;
}
