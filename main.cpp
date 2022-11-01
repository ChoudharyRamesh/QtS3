#include <qts3.h>
#include<QDebug>
#include <QCoreApplication>
#include<XmlToJson.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QtS3 s3("accessKey","secretKey");
    s3.renameFolder("myBucketName","oldFolderName","newFolderName");
    return a.exec();
}
