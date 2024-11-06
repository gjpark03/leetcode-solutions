/*
  You have a browser of one tab where you start on the homepage and you can visit another url, 
  get back in the history number of steps or move forward in the history number of steps.
  Implement the BrowserHistory class:
  - BrowserHistory(string homepage) Initializes the object with the homepage of the browser.
  - void visit(string url) Visits url from the current page. It clears up all the forward history.
  - string back(int steps) Move steps back in history. If you can only return x steps in the history and steps > x, 
    you will return only x steps. Return the current url after moving back in history at most steps.
  - string forward(int steps) Move steps forward in history. If you can only forward x steps in the history and steps > x, 
    you will forward only x steps. Return the current url after forwarding in history at most steps.
*/

class BrowserHistory {
    stack<string> history, future;
    string current;
public:
    BrowserHistory(string homepage) {
        current = homepage;
    }
    
    void visit(string url) {
        // push current in history stack and mark url as current
        history.push(current);
        current = url;
        // delete all entries from future stack
        future = stack<string>();
    }
    
    string back(int steps) {
        // pop elements from history stack and push elements in future stack
        while(steps > 0 && !history.empty()) {
            future.push(current);
            current = history.top();
            history.pop();
            steps--;
        }
        return current;
    }
    
    string forward(int steps) {
        while(steps > 0 && !future.empty()) {
            history.push(current);
            current = future.top();
            future.pop();
            steps--;
        }
        return current;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
