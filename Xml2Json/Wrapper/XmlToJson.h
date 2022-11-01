#ifndef XML_TO_JSON_H
#define XML_TO_JSON_H
#include<QJsonObject>
#include<QJsonDocument>
#include<QByteArray>

QJsonDocument  XmlToJsonDoc(QByteArray & data);
QJsonObject XmlToJsonObject(QByteArray & data);

#endif // XML_TO_JSON_H
