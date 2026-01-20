#include <iostream>
#include <string>
#include <chrono>
#include <vector>

/* * PROJECT: Cryptocurrency
 * CONCEPT: One Name, Two Powers (Crypto & Currency)
 * AUTHOR: Sovereign Developer
 */

class CryptocurrencyEngine {
public:
    std::string projectName = "Cryptocurrency";

    void activateMiningPower() {
        std::cout << "\n[⚡] Activating 'Crypto' Power..." << std::endl;
        std::cout << "[⛏] Mining in progress on the Cryptocurrency Network..." << std::endl;
    }

    void activateChainPower() {
        std::cout << "[🔗] Activating 'Currency' Power..." << std::endl;
        std::cout << "[🛡️] Securing the Currency Chain ledger..." << std::endl;
    }

    void successMessage() {
        std::cout << "\n===============================================" << std::endl;
        std::cout << "✅ SUCCESS: 50 Units of 'Cryptocurrency' Mined!" << std::endl;
        std::cout << "Status: Crypto (Mined) | Mode: Currency (Validated)" << std::endl;
        std::cout << "===============================================" << std::endl;
    }
};

int main() {
    CryptocurrencyEngine core;

    std::cout << "🚀 Starting Project: " << core.projectName << std::endl;
    
    // এক নামের দুই ক্ষমতার বহিঃপ্রকাশ
    core.activateMiningPower(); // Crypto Power
    core.activateChainPower();  // Currency Power
    
    core.successMessage();

    return 0;
}
