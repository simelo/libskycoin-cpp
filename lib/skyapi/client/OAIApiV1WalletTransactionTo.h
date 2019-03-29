/**
 * Skycoin REST API.
 * Skycoin is a next-generation cryptocurrency.
 *
 * OpenAPI spec version: 0.25.1
 * Contact: contact@skycoin.net
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAI_api_v1_wallet_transaction_to.h
 *
 * 
 */

#ifndef OAI_api_v1_wallet_transaction_to_H
#define OAI_api_v1_wallet_transaction_to_H

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace skyqt {

class OAI_api_v1_wallet_transaction_to: public OAIObject {
public:
    OAI_api_v1_wallet_transaction_to();
    OAI_api_v1_wallet_transaction_to(QString json);
    ~OAI_api_v1_wallet_transaction_to() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint64 getHours() const;
    void setHours(const qint64 &hours);

    QString getAddress() const;
    void setAddress(const QString &address);

    qint64 getCoins() const;
    void setCoins(const qint64 &coins);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    qint64 hours;
    bool m_hours_isSet;
    bool m_hours_isValid;
    QString address;
    bool m_address_isSet;
    bool m_address_isValid;
    qint64 coins;
    bool m_coins_isSet;
    bool m_coins_isValid;
};

}

#endif // OAI_api_v1_wallet_transaction_to_H
