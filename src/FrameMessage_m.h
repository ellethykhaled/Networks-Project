//
// Generated file, do not edit! Created by opp_msgtool 6.0 from FrameMessage.msg.
//

#ifndef __FRAMEMESSAGE_M_H
#define __FRAMEMESSAGE_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

class FrameMessage;
/**
 * Class generated from <tt>FrameMessage.msg:1</tt> by opp_msgtool.
 * <pre>
 * packet FrameMessage
 * {
 *     int header;
 *     string payload;
 *     string trailer;
 *     int frameType;
 *     int ackNumber;
 * }
 * </pre>
 */
class FrameMessage : public ::omnetpp::cPacket
{
  protected:
    int header = 0;
    omnetpp::opp_string payload;
    omnetpp::opp_string trailer;
    int frameType = 0;
    int ackNumber = 0;

  private:
    void copy(const FrameMessage& other);

  protected:
    bool operator==(const FrameMessage&) = delete;

  public:
    FrameMessage(const char *name=nullptr, short kind=0);
    FrameMessage(const FrameMessage& other);
    virtual ~FrameMessage();
    FrameMessage& operator=(const FrameMessage& other);
    virtual FrameMessage *dup() const override {return new FrameMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getHeader() const;
    virtual void setHeader(int header);

    virtual const char * getPayload() const;
    virtual void setPayload(const char * payload);

    virtual const char * getTrailer() const;
    virtual void setTrailer(const char * trailer);

    virtual int getFrameType() const;
    virtual void setFrameType(int frameType);

    virtual int getAckNumber() const;
    virtual void setAckNumber(int ackNumber);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const FrameMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, FrameMessage& obj) {obj.parsimUnpack(b);}


namespace omnetpp {

template<> inline FrameMessage *fromAnyPtr(any_ptr ptr) { return check_and_cast<FrameMessage*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __FRAMEMESSAGE_M_H

