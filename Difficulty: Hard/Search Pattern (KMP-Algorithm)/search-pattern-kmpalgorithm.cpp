vector<int> computeLPS(const string& pat) {
    int m = pat.size();
    vector<int> lps(m, 0);
    int len = 0; // length of previous longest prefix suffix

    for (int i = 1; i < m; ) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1]; // fall back
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

// KMP Search function
vector<int> search(const string& txt, const string& pat) {
    vector<int> result;
    int n = txt.size(), m = pat.size();

    if (m > n) return result;

    vector<int> lps = computeLPS(pat);
    int i = 0, j = 0;

    while (i < n) {
        if (txt[i] == pat[j]) {
            i++; j++;
        }

        if (j == m) {
            result.push_back(i - j); // Match found
            j = lps[j - 1]; // continue searching
        } else if (i < n && txt[i] != pat[j]) {
            if (j != 0) j = lps[j - 1];
            else i++;
        }
    }
    return result;
}
