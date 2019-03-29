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
 * OAIInline_response_200_5.h
 *
 * 
 */

#ifndef OAIInline_response_200_5_H
#define OAIInline_response_200_5_H

#include <QJsonObject>


#include "OAI_api_v1_wallets_entries.h"
#include "OAI_api_v1_wallets_meta.h"
#include <QList>

#include "OAIObject.h"

namespace skyqt {

class OAIInline_response_200_5: public OAIObject {
public:
    OAIInline_response_200_5();
    OAIInline_response_200_5(QString json);
    ~OAIInline_response_200_5() override;

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAI_api_v1_wallets_entries> getEntries() const;
    void setEntries(const QList<OAI_api_v1_wallets_entries> &entries);

    OAI_api_v1_wallets_meta getMeta() const;
    void setMeta(const OAI_api_v1_wallets_meta &meta);

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void init();
    QList<OAI_api_v1_wallets_entries> entries;
    bool m_entries_isSet;
    bool m_entries_isValid;
    OAI_api_v1_wallets_meta meta;
    bool m_meta_isSet;
    bool m_meta_isValid;
};

}

#endif // OAIInline_response_200_5_H
