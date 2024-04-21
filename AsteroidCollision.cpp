vector<int> collidingAsteroids(vector<int> &asteroids)
{
    //    Write your code here.
    // one key point
    // + are always moving towards right
    // - are always moving towards left
    // so everytime a + asteroid is on top of stack. it may responsibe for a collision
    // but if a - asteroid is on top of stack, then it's sure that no collision will happen
    // pic inside the stack
    // (+) ------> collision
    // (-) <------- nothing

    // create the stack
    stack<int> st;
    for(int asteroid : asteroids) {
        // it will taking care that an asteroid shoud pushed or not
        bool pushAst = true;
        // if stack top asteroid is (+) and the current asteroid is (-) or 0 (massless) 
        while(!st.empty() && (st.top() > 0 && asteroid <= 0)) {
            int topAst = st.top();
            // if the current asteroid having more weight than the stack top asteroid
            // then remove the stack top asteroid and move on to next iteration
            if(abs(topAst) < abs(asteroid)) {
                st.pop();
                continue;
            }
            // if both have same weight
            // then pop the stack top asteroid and make the pushAst state to false and break out
            else if(abs(topAst) == abs(asteroid)) {
                st.pop();
                pushAst = false;
                break;
            }
            // if it has less weight than the stack top asteroid
            // then we don't do anything in stack and also make the pushAst state false and break out
            else {
                pushAst = false;
                break;
            }
        }

        if(pushAst) st.push(asteroid);
    }
    vector<int> asts;
    while(!st.empty()) {
        asts.push_back(st.top());
        st.pop();
    }
    reverse(asts.begin(), asts.end());

    return asts;
}
