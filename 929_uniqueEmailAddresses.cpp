#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

class Solution{
    public:
    int numUniqueEmails(vector<string>& emails){
        set<string> unique_emails_set;
        for (auto s:emails){
            auto att = s.find('@');
            
            auto plus = s.rfind('+', att);
            while (plus != string::npos){
                s.erase(plus,att-plus);
                att = s.find('@');
                plus = s.rfind('+', att);
            }
            
            while (s.rfind('.', att) != string::npos){
                s.erase(s.rfind('.', att),1);
                att = s.find('@');
            }
            unique_emails_set.insert(s);
        } 
        return unique_emails_set.size();
    }
};

int main(){
    Solution sol;
    // vector<string> emails = {"testemail+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"};
    vector<string> emails = {"r.cyo.g+d.h+b.ja@tgsg.z.com","fg.r.u.uzj+o.f.d@kziczvh.com","r.cyo.g+ng.r.iq@tgsg.z.com","fg.r.u.uzj+lp.k@kziczvh.com","r.cyo.g+n.h.e+n.g@tgsg.z.com","fg.r.u.uzj+k+p.j@kziczvh.com","fg.r.u.uzj+w.y+b@kziczvh.com","r.cyo.g+x+d.c+f.t@tgsg.z.com","r.cyo.g+x+t.y.l.i@tgsg.z.com","r.cyo.g+brxxi@tgsg.z.com","r.cyo.g+z+dr.k.u@tgsg.z.com","r.cyo.g+d+l.c.n+g@tgsg.z.com","fg.r.u.uzj+vq.o@kziczvh.com","fg.r.u.uzj+uzq@kziczvh.com","fg.r.u.uzj+mvz@kziczvh.com","fg.r.u.uzj+taj@kziczvh.com","fg.r.u.uzj+fek@kziczvh.com"};
    int res = sol.numUniqueEmails(emails);
    return 0;
}