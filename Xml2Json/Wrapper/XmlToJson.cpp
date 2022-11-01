#include<XmlToJson.h>
#include "../Src/xml2json.hpp"

QJsonDocument XmlToJsonDoc(QByteArray & data){
    std::string  doc = xml2json(data.toStdString().c_str());
    QJsonDocument jsonDoc =QJsonDocument::fromJson(QByteArray::fromStdString(doc));
    return jsonDoc;
}

QJsonObject XmlToJsonObject(QByteArray & data){
    std::string  doc = xml2json(data.toStdString().c_str());
    QJsonDocument jsonDoc =QJsonDocument::fromJson(QByteArray::fromStdString(doc));
    return jsonDoc.object();
}
