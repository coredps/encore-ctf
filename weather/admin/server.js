const express = require('express');
const path = require('path');
const cookieParser = require('cookie-parser');

const app = express();

const PORT = process.env.PORT || 9001;

app.use(cookieParser());

app.listen(PORT, () => {
    console.log(`Listening on port ${PORT}`);
});

app.get('/', (req, res) => {
    const cookie = req.cookies.weather;
    if (cookie === 'cmFpbnkK') {
        res.send('enc0re{L0-f1_s0ngs}');
        return;
    }
    res.cookie('weather','c3VubnkK');
    res.sendFile(path.join(__dirname, 'public', 'index.html'));
});
