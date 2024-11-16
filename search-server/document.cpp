//Вставьте сюда своё решение из урока «Очередь запросов» темы «Стек, очередь, дек».
#include "document.h"

using namespace std;

std::ostream& operator<<(std::ostream& out, const Document& document) {
    out << "{ " << "document_id = " << document.id << ", "
        << "relevance = " << document.relevance << ", "
        << "rating = " << document.rating << " }";
    return out;
}