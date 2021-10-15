class client{                    
    private:
        string clientNIC;
        string clientName;
        string clientEmail;
        string clientAddress;
    
    public:

        void bookEvent();
        void registerClient(string clientNIC, string clientName,string clientEmail,string clientAddress);
        string giveFeedback();
    
    //setters

    void setClientNIC(int nic){
        clientNIC = nic;
    }

    void setClientName(string name){
        clientName = name;
    }

    void setClientEmail(string email){
        clientEmail = email;
    }

    void setClientNIC(string address){
        clientAddress = address;
    }

    //getters
    string getClientName(){
        return clientName;
    }
    string getClientEmail(){
        return clientEmail;
    }
    string getClientNIC(){
        return clientNIC;
    }
    string getClientAddress(){
        return clientAddress;
    }

    //constructor
    client(){

    }
    client(string name,string nic,string email,string address){

        clientName=name;
        clientNIC= nic;
        clientAddress = address;
        clientEmail = email;
    }
};