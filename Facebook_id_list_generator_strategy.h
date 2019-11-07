#include "Abstract_id_list_generator_strategy.h"

class Facebook_id_list_generator_strategy: public Abstract_id_list_generator_strategy{
private:
    int size;
public:
    explicit Facebook_id_list_generator_strategy(int m_size) {
        size=m_size;
    }
    vector<string> generate() override ;
    vector<string> load_urls_from_disk() override ;
};
