package net.javaGuids.springboot.payload;
public class User {
    private String eventId;
    private String eventType;
    private String eventSubtype;
    private String entityId;
    private int entityVersion;
    private String eventSrcId;
    private String eventCrtTmstp;
    private String ticketDetail;
    private String eventObj;
    private int deviceId;
    private int stationId;
    private String isTest;
    private int gateId;
    private String productType;
    private float transactionFare;
    private String ticketSerialNo;
    private int passengerCount;

    // Getters and Setters
    public String getEventId() {
        return eventId;
    }

    public void setEventId(String eventId) {
        this.eventId = eventId;
    }

    public String getEventType() {
        return eventType;
    }

    public void setEventType(String eventType) {
        this.eventType = eventType;
    }

    public String getEventSubtype() {
        return eventSubtype;
    }

    public void setEventSubtype(String eventSubtype) {
        this.eventSubtype = eventSubtype;
    }

    public String getEntityId() {
        return entityId;
    }

    public void setEntityId(String entityId) {
        this.entityId = entityId;
    }

    public int getEntityVersion() {
        return entityVersion;
    }

    public void setEntityVersion(int entityVersion) {
        this.entityVersion = entityVersion;
    }

    public String getEventSrcId() {
        return eventSrcId;
    }

    public void setEventSrcId(String eventSrcId) {
        this.eventSrcId = eventSrcId;
    }

    public String getEventCrtTmstp() {
        return eventCrtTmstp;
    }

    public void setEventCrtTmstp(String eventCrtTmstp) {
        this.eventCrtTmstp = eventCrtTmstp;
    }

    public String getTicketDetail() {
        return ticketDetail;
    }

    public void setTicketDetail(String ticketDetail) {
        this.ticketDetail = ticketDetail;
    }

    public String getEventObj() {
        return eventObj;
    }

    public void setEventObj(String eventObj) {
        this.eventObj = eventObj;
    }

    public int getDeviceId() {
        return deviceId;
    }

    public void setDeviceId(int deviceId) {
        this.deviceId = deviceId;
    }

    public int getStationId() {
        return stationId;
    }

    public void setStationId(int stationId) {
        this.stationId = stationId;
    }

    public String getIsTest() {
        return isTest;
    }

    public void setIsTest(String isTest) {
        this.isTest = isTest;
    }

    public int getGateId() {
        return gateId;
    }

    public void setGateId(int gateId) {
        this.gateId = gateId;
    }

    public String getProductType() {
        return productType;
    }

    public void setProductType(String productType) {
        this.productType = productType;
    }

    public float getTransactionFare() {
        return transactionFare;
    }

    public void setTransactionFare(float transactionFare) {
        this.transactionFare = transactionFare;
    }

    public String getTicketSerialNo() {
        return ticketSerialNo;
    }

    public void setTicketSerialNo(String ticketSerialNo) {
        this.ticketSerialNo = ticketSerialNo;
    }

    public int getPassengerCount() {
        return passengerCount;
    }

    public void setPassengerCount(int passengerCount) {
        this.passengerCount = passengerCount;
    }

    @Override
    public String toString() {
        return "User{" +
                "eventId='" + eventId + '\'' +
                ", eventType='" + eventType + '\'' +
                ", eventSubtype='" + eventSubtype + '\'' +
                ", entityId='" + entityId + '\'' +
                ", entityVersion=" + entityVersion +
                ", eventSrcId='" + eventSrcId + '\'' +
                ", eventCrtTmstp='" + eventCrtTmstp + '\'' +
                ", ticketDetail='" + ticketDetail + '\'' +
                ", eventObj='" + eventObj + '\'' +
                ", deviceId=" + deviceId +
                ", stationId=" + stationId +
                ", isTest='" + isTest + '\'' +
                ", gateId=" + gateId +
                ", productType='" + productType + '\'' +
                ", transactionFare=" + transactionFare +
                ", ticketSerialNo='" + ticketSerialNo + '\'' +
                ", passengerCount=" + passengerCount +
                '}';
    }
}

