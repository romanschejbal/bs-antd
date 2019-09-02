function convertType(doc) {
  return doc.replace(/boolean/g, "bool");
}

Array.from($0.querySelectorAll("tr"))
  .map(tr => Array.from(tr.querySelectorAll("td")))
  .filter(a => a.length)
  .map(row => `~${row[0].textContent}:${convertType(row[2].textContent)}=?`)
  .join(",\n");
